//
//  FKAToDoItem.h
//  toDoList
//
//  Created by Chad D Colby on 10/30/13.
//  Copyright (c) 2013 kramerica. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FKAToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
