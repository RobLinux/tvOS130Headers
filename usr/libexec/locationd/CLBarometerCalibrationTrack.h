/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <locationd/locationd-Structs.h>
@interface CLBarometerCalibrationTrack : NSObject {

	double _fStartTime;
	double _fEndTime;
	unsigned long long _fType;
	CLLocationCoordinate2D _fLocationCoordinates;

}

@property (assign,nonatomic) double fStartTime;                                        //@synthesize fStartTime=_fStartTime - In the implementation block
@property (assign,nonatomic) double fEndTime;                                          //@synthesize fEndTime=_fEndTime - In the implementation block
@property (assign,nonatomic) unsigned long long fType;                                 //@synthesize fType=_fType - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D fLocationCoordinates;              //@synthesize fLocationCoordinates=_fLocationCoordinates - In the implementation block
-(unsigned long long)fType;
-(double)fStartTime;
-(double)fEndTime;
-(void)setFStartTime:(double)arg1 ;
-(void)setFEndTime:(double)arg1 ;
-(void)setFType:(unsigned long long)arg1 ;
-(CLLocationCoordinate2D)fLocationCoordinates;
-(void)setFLocationCoordinates:(CLLocationCoordinate2D)arg1 ;
@end

