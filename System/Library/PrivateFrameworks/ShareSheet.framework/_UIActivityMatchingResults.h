/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, _UIActivityMatchingContext, NSArray;

@interface _UIActivityMatchingResults : NSObject {

	NSMutableSet* _excludedActivityTypesSet;
	_UIActivityMatchingContext* _context;
	NSArray* _orderedActivities;

}

@property (nonatomic,retain) NSArray * orderedActivities;                         //@synthesize orderedActivities=_orderedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityMatchingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * excludedActivityTypes; 
-(_UIActivityMatchingContext *)context;
-(NSArray *)excludedActivityTypes;
-(NSArray *)orderedActivities;
-(void)addExcludedActivityTypes:(id)arg1 ;
-(id)initWithActivityMatchingContext:(id)arg1 ;
-(void)setOrderedActivities:(NSArray *)arg1 ;
@end

