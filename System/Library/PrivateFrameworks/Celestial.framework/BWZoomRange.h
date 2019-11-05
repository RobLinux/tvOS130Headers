/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/NSCopying.h>

@interface BWZoomRange : NSObject <NSCopying> {

	float _lowerBound;
	float _upperBound;
	float _fudgedLowerBound;
	float _fudgedUpperBound;
	unsigned long long _hash;

}

@property (nonatomic,readonly) float lowerBound;                    //@synthesize lowerBound=_lowerBound - In the implementation block
@property (nonatomic,readonly) float upperBound;                    //@synthesize upperBound=_upperBound - In the implementation block
@property (nonatomic,readonly) float fudgedLowerBound;              //@synthesize fudgedLowerBound=_fudgedLowerBound - In the implementation block
@property (nonatomic,readonly) float fudgedUpperBound;              //@synthesize fudgedUpperBound=_fudgedUpperBound - In the implementation block
+(id)zoomRangeWithLower:(float)arg1 upperBound:(float)arg2 ;
+(id)fudgedZoomRangeWithLower:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)lowerBound;
-(float)upperBound;
-(float)applyFudgeToZoomFactor:(float)arg1 ;
-(id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 ;
-(id)initWithLowerBound:(float)arg1 upperBound:(float)arg2 fudgedLowerBound:(float)arg3 fudgedUpperBound:(float)arg4 ;
-(float)fudgedLowerBound;
-(float)fudgedUpperBound;
@end

