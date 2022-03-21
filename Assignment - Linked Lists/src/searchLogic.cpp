#include "../include/header.h"

void searchKeyLogic(DVD *head, std::fstream &oFile, const int &key, int &index) {
   DVD *node = head;
   while (node->nextNode != NULL) {

      if (node->year == key) {
         if (index == 1)
            oFile << "Search by year for " << key << " found:\n";
         multiMoviePrint(oFile, node, index);
      } else if (node->rating == key) {
         if (index == 1)
            oFile << "Search by rating for " << key << " found:\n";
         multiMoviePrint(oFile, node, index);
      }

      node = node->nextNode;
   }
}

void searchKeyLogic(DVD *head, std::fstream &oFile, const std::string &key, int &index) {
   DVD *node = head;
   while (node->nextNode != NULL) {

      if (node->genre == key || node->altGenre == key) {
         if (index == 1)
            oFile << "Search by genre for " << key << " found:\n";
         multiMoviePrint(oFile, node, index);
      } else if (node->leadActor == key || node->subActor == key) {
         if (index == 1)
            oFile << "Search by actor for " << key << " found:\n";
         multiMoviePrint(oFile, node, index);
      }

      node = node->nextNode;
   }
}

void outputList(DVD *head, std::fstream &oFile, int &index) {
   DVD *node = head;
   while (node->nextNode != NULL) {
      multiMoviePrint(oFile, node, index);
      node = node->nextNode;
   }
}