/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.Yudha29.Matrix.Main;

import com.github.Yudha29.Matrix.Matrix.Matrix;

/**
 *
 * @author 62853
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Matrix matrix = new Matrix(3, 3);
//        
        matrix.fillMatrix();
        
        Matrix matrix2 = new Matrix(3, 3);
//      
        matrix2.fillMatrix();
        System.out.println("Matrix 1 : ");
        matrix.printMatrix();
        System.out.println("Matrix 2 : ");
        matrix2.printMatrix();
        
        System.out.println("Perkalian : ");
        Matrix.print(matrix.multiply(matrix2.a));
        System.out.println("perjumlahan : ");
        Matrix.print(Matrix.add(matrix.a, matrix2.a));
    }
    
}
