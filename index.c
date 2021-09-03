#include <stdio.h>
#include <string.h>
#include <math.h>

void displayPathtoPrincess(int n, char **grid){
    //logic here
    // int princess = -1;
    int m_pos = (n-1)/2;
    char *dir1, *dir2;
    
    if(grid[0][0]=='P' || grid[0][0]=='p'){
        // princess = 0;
        dir1 = "LEFT";
        dir2 = "UP";
    }
    else if(grid[0][n-1]=='P' || grid[0][n-1]=='p'){
        // princess = 1;     
        dir1 = "RIGHT";
        dir2 = "UP";
    }
    else if(grid[n-1][0]=='P' || grid[n-1][0]=='p'){
        // princess = 2;
        dir1 = "DOWN";
        dir2 = "LEFT";
    }
    else{
        // princess = 3;
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
    // char grid[m][m]={};
    char line[m];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        grid[i] = (char *)malloc(m*sizeof(char));
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
