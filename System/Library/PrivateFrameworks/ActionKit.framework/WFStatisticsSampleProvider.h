/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFStatisticsSampleProvider <NSObject>
@property (nonatomic,readonly) BOOL canProvideDataSamples; 
@property (nonatomic,readonly) NSArray * dataSamples; 
@required
-(void)updateValue:(id)arg1 fromStatisticsOperation:(long long)arg2;
-(BOOL)canProvideDataSamples;
-(NSArray *)dataSamples;

@end

