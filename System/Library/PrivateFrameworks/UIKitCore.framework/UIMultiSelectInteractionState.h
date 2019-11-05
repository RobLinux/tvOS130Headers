/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSIndexPath, NSArray;

@interface UIMultiSelectInteractionState : NSObject {

	unsigned long long _ignoringSelectionChangedNotificationsCounter;
	BOOL _selecting;
	NSIndexPath* _startIndexPath;
	NSIndexPath* _endIndexPath;
	NSArray* _originallySelectedIndexPaths;
	NSArray* _allSelectedIndexPaths;
	CGPoint _startPoint;

}

@property (assign,nonatomic) CGPoint startPoint;                                        //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,retain) NSIndexPath * startIndexPath;                              //@synthesize startIndexPath=_startIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * endIndexPath;                                //@synthesize endIndexPath=_endIndexPath - In the implementation block
@property (assign,getter=isSelecting,nonatomic) BOOL selecting;                         //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,copy) NSArray * originallySelectedIndexPaths;                      //@synthesize originallySelectedIndexPaths=_originallySelectedIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * allSelectedIndexPaths;                             //@synthesize allSelectedIndexPaths=_allSelectedIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL ignoringSelectionChangedNotifications; 
-(void)setStartIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)startIndexPath;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1 ;
-(void)setOriginallySelectedIndexPaths:(NSArray *)arg1 ;
-(void)setAllSelectedIndexPaths:(NSArray *)arg1 ;
-(NSArray *)allSelectedIndexPaths;
-(BOOL)ignoringSelectionChangedNotifications;
-(NSArray *)originallySelectedIndexPaths;
-(id)pathsToSelectForInterpolatedIndexPaths:(id)arg1 ;
-(id)initWithCurrentSelection:(id)arg1 ;
-(void)ignoreSelectionChangedNotificationsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)stillValidForSelectedIndexPaths:(id)arg1 ;
-(void)updateStateWithDifferenceFromCurrentSelection:(id)arg1 ;
-(void)updateStateWithStartingIndexPath:(id)arg1 otherSelectedIndexPaths:(id)arg2 ;
-(id)pathsToDeselectForInterpolatedIndexPaths:(id)arg1 currentlySelectedIndexPaths:(id)arg2 ;
-(NSIndexPath *)endIndexPath;
-(void)setEndIndexPath:(NSIndexPath *)arg1 ;
@end

