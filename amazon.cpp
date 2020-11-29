map<string, vector<string>> getBookGenre(int numUsers, map<string, vector<string>> userBooksListenedTo, int numGenres, map<string, vector<string>> bookGenres) {
   //Return map
   map<string, vector<string>> bookGenre;
   //Two maps iterators
   map<string, vector<string>>::iterator itr1;
   map<string, vector<string>>::iterator itr2;
   //Iterate through each user map
   for (itr1 = userBooksListenedTo.begin(); itr1 != userBooksListenedTo.end(); ++itr1) {
       //get user name
       string user = itr1->first;
       //Get userBooksListenedTo read books
       vector<string>booksRead = itr1->second;
       vector<string>genre;
       //Iterate through books
       for (int i = 0; i < booksRead.size(); i++) {
           //Get each bookGenres
           for (itr2 = bookGenres.begin(); itr2 != bookGenres.end(); ++itr2) {
               vector<string>books= itr2->second;
               //Compare and match with user boog add into genre
               for (int j = 0; j < books.size(); j++) {
                   if (books[j] == booksRead[i]) {
                       if (genre.size() == 0) {
                           genre.push_back(itr2->first);
                       }
                       else {
                           bool check=false;
                           for (int k = 0; k < genre.size(); k++) {
                               if (genre[k] == itr2->first) {
                                   check = true;
                                   break;
                               }
                           }
                           if (check == false) {
                               genre.push_back(itr2->first);
                           }
                       }
                   }
               }
           }
       }
       //Insert details into map
       bookGenre[user] = genre;
       genre.clear();
   }
   //Return from function
   return bookGenre;
}