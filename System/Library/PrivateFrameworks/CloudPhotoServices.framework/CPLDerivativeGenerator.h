/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLDerivativeGenerator
@required
+(BOOL)canGenerateImageDerivativesFromUTI:(id)arg1;
+(BOOL)isMovieUTI:(id)arg1;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5;
+(BOOL)isUnsupportedOriginalFormatError:(id)arg1;

@end
