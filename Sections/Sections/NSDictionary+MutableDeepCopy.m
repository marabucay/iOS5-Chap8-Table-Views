//
//  NSDictionary+MutableDeepCopy.m
//  Sections
//
//  Created by Maria Alice C. Lim on 9/16/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import "NSDictionary+MutableDeepCopy.h"

@implementation NSDictionary (MutableDeepCopy)

- (NSMutableDictionary *)mutableDeepCopy {
    NSMutableDictionary *returnDict = [[NSMutableDictionary alloc]
                                       initWithCapacity:[self count]];
    NSArray *keys = [self allKeys];
    for (id key in keys) {
        id oneValue = [self valueForKey:key];
        id oneCopy = nil;
        if ([oneValue respondsToSelector:@selector(mutableDeepCopy)])
            oneCopy = [oneValue mutableDeepCopy];
        else if ([oneValue respondsToSelector:@selector(mutableCopy)])
            oneCopy = [oneValue mutableCopy];
        if (oneCopy == nil)
            oneCopy = [oneValue copy];
        [returnDict setValue:oneCopy forKey:key];
    }
    return returnDict;
}

@end
