/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/NSCoding.h>

@class NSNumber, NSMutableArray;

@interface PAEKeyerCbCrSetup : NSObject <NSCoding> {

	NSNumber* _tolPieX[5];
	NSNumber* _tolPieY[5];
	NSNumber* _softPieX[5];
	NSNumber* _softPieY[5];
	NSMutableArray* _splineVertex;
	OMSpline* _keyer2DSatSpline;
	PAEKeyerPie* _keyer2DTolPie;
	PAEKeyerPie* _keyer2DSoftPie;
	BOOL _initialized;

}
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(void)setTolPieX:(id)arg1 indice:(int)arg2 ;
-(void)setTolPieY:(id)arg1 indice:(int)arg2 ;
-(void)setSoftPieX:(id)arg1 indice:(int)arg2 ;
-(void)setSoftPieY:(id)arg1 indice:(int)arg2 ;
-(Vec2f)polarToCartesian:(Vec2f)arg1 ;
-(void)interpVec2f:(float)arg1 left:(Vec2f)arg2 right:(Vec2f)arg3 interpolated:(Vec2f*)arg4 ;
-(void)toPolar:(const Vec2f*)arg1 polar:(Vec2f*)arg2 ;
-(void)pieToPolarForPie:(PAEKeyerPie*)arg1 polar:(Vec2f*)arg2 ;
-(void)pieToPolarForPie:(PAEKeyerPie*)arg1 softPie:(PAEKeyerPie*)arg2 tolPolar:(Vec2f*)arg3 softPolar:(Vec2f*)arg4 ;
-(void)offsetPie:(Vec2f*)arg1 offsetDegrees:(float)arg2 ;
-(void)interpPieWithWeight:(float)arg1 currentDirectionCorrection:(float)arg2 nextDirectionCorrection:(float)arg3 interpolatedCenter:(Vec2f)arg4 currentCenter:(Vec2f)arg5 currentPolar:(const Vec2f*)arg6 nextCenter:(Vec2f)arg7 nextPolar:(const Vec2f*)arg8 interpolationType:(int)arg9 interpolatedPie:(PAEKeyerPie*)arg10 ;
-(OMSpline*)getKeyer2DSatSpline;
-(PAEKeyerPie*)getKeyer2DTolPie;
-(PAEKeyerPie*)getKeyer2DSoftPie;
@end

