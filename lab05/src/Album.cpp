#include"Album.h"

Album::Album(){
    std::cout << "Wywolanie konstruktora Album..." << std::endl << std::endl;
    _size = 0;
}

Album::Album(std::string albumName){
    std::cout << "Wywolanie konstruktora Album..." << std::endl << std::endl;
    _albumName = albumName;
    _size = 0;
}

Album::Album(std::string albumName, Song s1, Song s2, Song s3){
    std::cout << "Wywolanie konstruktora Album..." << std::endl << std::endl;
    _albumName = albumName;
    _size = 3;
    _songsTab = new Song[_size];
    _songsTab[0] = s1;
    _songsTab[1] = s2;
    _songsTab[2] = s3;
}
Album::Album(std::string albumName, Song s1, Song s2, Song s3, Song s4){
    std::cout << "Wywolanie konstruktora Album..." << std::endl << std::endl;
    _albumName = albumName;
    _size = 4;
    _songsTab = new Song[_size];
    _songsTab[0] = s1;
    _songsTab[1] = s2;
    _songsTab[2] = s3;
    _songsTab[3] = s4;
}
Album::Album(std::string albumName, int size, Song* songs){
    std::cout << "Wywolanie konstruktora Album..." << std::endl << std::endl;
    _albumName = albumName;
    _size = size;
    _songsTab = new Song[_size];
    for(int i=0; i<size; i++){
        _songsTab[i] = songs[i];
    }
}
Album::~Album(){
    std::cout << "Wywolanie destruktora Album..." << std::endl << std::endl;
}

void Album::Presentation(){
    std::cout << "### Prezentacja albumu muzycznego ###" << std::endl;
    std::cout << "Tytul: " << _albumName << std::endl;
    std::cout << "Liczba piosenek: " << _size << std::endl;
    if(_size > 0){
        for(int i=0; i<_size; i++){
            std::cout << "Piosenka - tytul: " << _songsTab[i].getName();
            std::cout << ", czas trwania = " << _songsTab[i].getX();
            std::cout << ", zyski z odtwarzania (w mln $) = " << _songsTab[i].getY() << std::endl;
        }
    }
    std::cout << std::endl;
}
void Album::SetName(std::string albumName){
    _albumName = albumName;
}
    
Song* Album::GetSongs(){
    return _songsTab;
}

void Album::SetNewSongs(int size, Song* songs){
    _size = size;
    _songsTab = new Song[_size];
    for(int i=0; i<size; i++){
        _songsTab[i] = songs[i];
    }
}

void Album::SetSong(int num, std::string name, double x, double y){
    if(num > 0 && num <= _size){
        _songsTab[num-1] = Song(name, x, y);
    }
}