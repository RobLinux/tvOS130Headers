/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/ExternalDetectedObject.h>

@class NSString;

@interface EspressoFaceDetectedObject : NSObject <ExternalDetectedObject> {

	float confidence;
	long long objectType;
	CGPoint center;
	CGRect bounds;

}

@property (assign) float confidence; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long objectType; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint center; 
-(float)confidence;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(CGRect)bounds;
-(void)setConfidence:(float)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithOptionsXloc:(float)arg1 yloc:(float)arg2 size:(float)arg3 confidence:(float)arg4 ;
@end

