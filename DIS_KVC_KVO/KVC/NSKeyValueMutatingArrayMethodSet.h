//
//  NSKeyValueMutatingArrayMethodSet.h
//  KV
//
//  Created by renjinkui on 2017/2/16.
//  Copyright © 2017年 JK. All rights reserved.
//

#import "NSKeyValueMutatingCollectionMethodSet.h"

@interface NSKeyValueMutatingArrayMethodSet : NSKeyValueMutatingCollectionMethodSet
@property (nonatomic, assign) struct objc_method *insertObjectAtIndex;
@property (nonatomic, assign) struct objc_method *removeObjectAtIndex;
@property (nonatomic, assign) struct objc_method *replaceObjectAtIndex;
@property (nonatomic, assign) struct objc_method *insertObjectsAtIndexes;
@property (nonatomic, assign) struct objc_method *removeObjectsAtIndexes;
@property (nonatomic, assign) struct objc_method *replaceObjectsAtIndexes;
@end
