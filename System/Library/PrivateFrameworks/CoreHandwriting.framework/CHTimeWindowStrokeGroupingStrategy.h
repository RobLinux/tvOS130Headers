/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingStrategy.h>

@interface CHTimeWindowStrokeGroupingStrategy : CHStrokeGroupingStrategy
-(id)updatedGroupingResult:(id)arg1 byAddingStrokes:(id)arg2 removingStrokeIdentifiers:(id)arg3 stableStrokeIdentifiers:(id)arg4 allSubstrokesByStrokeIdentifier:(id)arg5 withCancellationBlock:(/*^block*/id)arg6 ;
-(id)recognizableDrawingForStrokeGroup:(id)arg1 translationVector:(CGVector)arg2 originalDrawing:(id*)arg3 orderedStrokesIDs:(id*)arg4 rescalingFactor:(double*)arg5 ;
-(id)_timeSortedStrokesForIdentifiers:(id)arg1 ;
@end

