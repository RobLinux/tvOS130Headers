/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MiroBlueprintTitleStyleProtocol <NSObject>
@property (nonatomic,readonly) NSString * effectID; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) NSDictionary * parametersDictionary; 
@property (nonatomic,readonly) NSString * titleAndAnimationStyleDescription; 
@property (nonatomic,readonly) BOOL titleRequestsColorAnalysis; 
@required
-(NSString *)fontName;
-(NSString *)effectID;
-(NSString *)titleAndAnimationStyleDescription;
-(NSDictionary *)parametersDictionary;
-(BOOL)titleRequestsColorAnalysis;

@end

