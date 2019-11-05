/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol REElementDataSourceProperties <REExportedInterface>
@property (nonatomic,readonly) NSString * name; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
@required
-(NSString *)name;
-(unsigned long long)state;
-(BOOL)isRunning;
-(NSDictionary *)dataSourceProperties;

@end

