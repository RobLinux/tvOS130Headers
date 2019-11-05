/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/NSSecureCoding.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding> {

	BOOL _is3DLandmarks;
	NSDictionary* _results;

}

@property (assign,nonatomic) BOOL is3DLandmarks;                  //@synthesize is3DLandmarks=_is3DLandmarks - In the implementation block
@property (nonatomic,retain) NSDictionary * results;              //@synthesize results=_results - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unitTestingFaceLandmarksIs3D:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(id)initWithVisionFaceLandmarks:(id)arg1 ;
-(void)setIs3DLandmarks:(BOOL)arg1 ;
-(BOOL)is3DLandmarks;
-(id)pointsArrayForRegion:(id)arg1 ;
-(id)pointValuesForFaceLandmarkType:(unsigned long long)arg1 ;
-(id)localizedStringForLandmarkType:(unsigned long long)arg1 ;
@end

