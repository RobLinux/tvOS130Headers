/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@interface WebVisiblePosition : NSObject {

	WebObjectInternalRef _internal;

}

@property (assign,nonatomic) int affinity; 
+(id)_wrapVisiblePosition:(VisiblePosition*)arg1 ;
+(id)_wrapVisiblePositionIfValid:(VisiblePosition*)arg1 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(BOOL)isEditable;
-(VisiblePosition*)_visiblePosition;
-(unsigned char)textDirection;
-(id)positionByMovingInDirection:(int)arg1 amount:(unsigned)arg2 withAffinityDownstream:(BOOL)arg3 ;
-(BOOL)directionIsDownstream:(int)arg1 ;
-(int)distanceFromPosition:(id)arg1 ;
-(id)positionByMovingInDirection:(int)arg1 amount:(unsigned)arg2 ;
-(BOOL)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2 ;
-(id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2 ;
-(BOOL)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2 ;
-(id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2 ;
-(id)positionAtStartOrEndOfWord;
-(BOOL)requiresContextForWordBoundary;
-(BOOL)atAlphaNumericBoundaryInDirection:(int)arg1 ;
-(id)enclosingRangeWithDictationPhraseAlternatives:(id*)arg1 ;
-(id)enclosingRangeWithCorrectionIndicator;
-(int)affinity;
-(void)setAffinity:(int)arg1 ;
@end

