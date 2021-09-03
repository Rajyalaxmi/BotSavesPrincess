#include <stdio.h>
#include <stdlib.h>

void displayPathtoPrincess(int n, char **grid){
    int m_pos = (n-1)/2;
    char *dir1, *dir2;
    
    if(grid[0][0]=='P' || grid[0][0]=='p'){
        dir1 = "LEFT";
        dir2 = "UP";
    }
    else if(grid[0][n-1]=='P' || grid[0][n-1]=='p'){
        dir1 = "RIGHT";
        dir2 = "UP";
    }
    else if(grid[n-1][0]=='P' || grid[n-1][0]=='p'){
        dir1 = "DOWN";
        dir2 = "LEFT";
    }
    else{
        dir1 = "DOWN";
        dir2 = "RIGHT";
    }
    for(int i = 0; i < m_pos; i++){
        printf("%s\n%s\n", dir1, dir2);
    }
    return;
}

int main(void) {
    int m;
    scanf("%d", &m);
    char **grid = (char **)malloc(m*sizeof(char *));

    for(int i=0; i<m; i++) {
        grid[i] = (char *)malloc(m*sizeof(char));
        scanf("%s", grid[i]);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
