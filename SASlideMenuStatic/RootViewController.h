//
//  RootViewController.h
//  xo-json
//
//  Created by haltink on 5/27/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController :  UIViewController <UITableViewDataSource, UITabBarControllerDelegate>
    
{

    NSArray *tableData;
    NSMutableArray *users;
    NSMutableArray * tours;
}

@property (nonatomic, retain) NSArray *tableData;

- (void)parseJSONIOS5;
- (void)parseJSON;


@end
