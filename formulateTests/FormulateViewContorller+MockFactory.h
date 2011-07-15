//
//  FormulateViewContorller+MockFactory.h
//  formulate
//
//  Created by Shawn Spooner on 7/14/11.
//  Copyright 2011 ssSoftwareCreations. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FormulateViewController.h"

@interface FormulateViewController (FormulateViewContorller_MockFactory)


-(UITextField*)buildTextFieldAt:(CGRect)position;
-(void)renderControl:(id)control;

@end