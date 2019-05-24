//
//  TSTObject.h
//  simpleObject
//
//  Created by jcy on 2019/5/24.
//  Copyright © 2019 dreamume. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TSTObject : NSObject

@property (nonatomic, copy) NSString* name;

- (void)print;

@end

NS_ASSUME_NONNULL_END
