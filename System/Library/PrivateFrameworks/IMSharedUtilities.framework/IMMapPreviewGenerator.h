/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMPreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMMapPreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(BOOL)writesToDisk;
+(CGSize)sizePreviewAtSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 interfaceStyle:(long long)arg3 error:(id*)arg4 ;
+(CLLocationCoordinate2D)coordinateForvCardURL:(id)arg1 ;
+(CGSize)mapThumbnailFillSizeForWidth:(double)arg1 ;
+(id)mapSnapshotterQueue;
+(id)titleBarMaskImageForWidth:(double)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(id)vCardDataForURL:(id)arg1 ;
+(id)vCardURLSForData:(id)arg1 ;
+(id)valueForKey:(id)arg1 forURLComponents:(id)arg2 ;
@end
