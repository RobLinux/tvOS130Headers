/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DCURLGenerator : NSObject

@property (nonatomic,readonly) NSString * scheme; 
@property (nonatomic,readonly) NSString * host; 
@property (nonatomic,readonly) NSString * path; 
@property (nonatomic,readonly) NSString * query; 
-(NSString *)scheme;
-(NSString *)host;
-(NSString *)query;
-(id)URL;
-(NSString *)path;
@end

