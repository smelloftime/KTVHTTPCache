//
//  KTVHCDataResponse.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/24.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KTVHCRange.h"

@interface KTVHCDataResponse : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithURL:(NSURL *)URL headers:(NSDictionary *)headers NS_DESIGNATED_INITIALIZER;

@property (nonatomic, copy, readonly) NSURL *URL;
@property (nonatomic, copy, readonly) NSDictionary *headers;
@property (nonatomic, copy, readonly) NSDictionary *headersWithoutRangeAndLength;
@property (nonatomic, copy, readonly) NSString *contentType;
@property (nonatomic, readonly) KTVHCRange range;
@property (nonatomic, readonly) long long totalLength;
@property (nonatomic, readonly) long long currentLength;

- (KTVHCDataResponse *)responseWithRange:(KTVHCRange)range;

@end
