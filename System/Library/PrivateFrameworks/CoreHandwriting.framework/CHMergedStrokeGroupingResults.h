/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary;

@interface CHMergedStrokeGroupingResults : CHStrokeGroupingResult {

	NSDictionary* _groupingResultsByStrategyIdentifier;

}

@property (nonatomic,retain,readonly) NSDictionary * groupingResultsByStrategyIdentifier;              //@synthesize groupingResultsByStrategyIdentifier=_groupingResultsByStrategyIdentifier - In the implementation block
-(void)dealloc;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 groupingResultsByStrategyIdentifier:(id)arg4 ;
-(NSDictionary *)groupingResultsByStrategyIdentifier;
@end

