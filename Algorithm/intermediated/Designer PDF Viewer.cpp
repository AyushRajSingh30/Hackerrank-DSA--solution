int designerPdfViewer(int h_count, int* h, char* word) {
char text[26] = {'a' ,'b' ,'c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z'};
    int max = 0;
    for(int i = 0; i<strlen(word); i++){
        for(int j = 0; j < 26; j++){
            if(*(word + i) == text[j] && *(h+j) > max){
                max = *(h+j);
            }
        }
    }
    return strlen(word)*max;
}
