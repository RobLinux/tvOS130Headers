/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData, PVFace;

@interface PVFaceCrop : PVObject {

	NSData* _faceCropData;
	PVFace* _originatingFace;
	CGSize _cachedImageDimensions;
	short _state;

}

@property (assign,nonatomic) short state;              //@synthesize state=_state - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(short)state;
-(void)setState:(short)arg1 ;
-(CGSize)imageDimensions;
-(id)faceCropData;
-(id)originatingFace;
-(id)initWithLocalIdentifier:(id)arg1 faceCropData:(id)arg2 ;
-(id)initWithFaceCropData:(id)arg1 originatingFace:(id)arg2 ;
@end

