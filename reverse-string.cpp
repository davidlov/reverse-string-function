//This function reverses strings
std::string reverse_string(std::string text) {

  std::string copy;
  
  for (int i = text.size() - 1; i >= 0; i--) {
    copy.push_back(text[i]);
  }
  
  return copy;
  
}
