/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject {

	AVExternalDeviceIconInternal* _externalDeviceIcon;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) NSData * imageData; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)pixelSize;
-(NSData *)imageData;
-(BOOL)isPrerendered;
@end

