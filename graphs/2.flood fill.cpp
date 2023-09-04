  void dfsrec(int i,int j,vector<vector<int>>& image, int color,int colorjiskochangekarnahe){

image[i][j]=color;

int di[]={0,+1,0,-1};
int dj[]={+1,0,-1,0};

for(int x=0;x<4;x++){
    int ni=i+di[x];
    int nj=j+dj[x];
    if(ni>=0 && ni<image.size() && nj>=0 && nj<image[0].size() ){
        if(image[ni][nj]==colorjiskochangekarnahe && image[ni][nj]!=color){
            dfsrec(ni,nj,image,color,colorjiskochangekarnahe);
        }
    }
}


}
