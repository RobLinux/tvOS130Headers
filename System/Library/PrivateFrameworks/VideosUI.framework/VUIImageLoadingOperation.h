/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVImage, NSError;


@protocol VUIImageLoadingOperation <NSObject>
@property (nonatomic,readonly) CGSize scaleToSize; 
@property (nonatomic,readonly) BOOL cropToFit; 
@property (nonatomic,readonly) TVImage * image; 
@property (nonatomic,readonly) unsigned long long scalingResult; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(NSError *)error;
-(TVImage *)image;
-(CGSize)scaleToSize;
-(BOOL)cropToFit;
-(unsigned long long)scalingResult;

@end

