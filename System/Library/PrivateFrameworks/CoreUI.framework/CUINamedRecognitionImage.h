/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUINamedLookup.h>

@interface CUINamedRecognitionImage : CUINamedLookup

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize physicalSizeInMeters; 
@property (nonatomic,readonly) int exifOrientation; 
-(CGImageRef)image;
-(int)exifOrientation;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CGSize)physicalSizeInMeters;
@end

