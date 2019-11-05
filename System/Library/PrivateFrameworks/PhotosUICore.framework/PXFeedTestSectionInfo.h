/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {

	PLPhotoLibrary* _photoLibrary;
	long long _countOfItems;

}

@property (nonatomic,readonly) long long countOfItems;              //@synthesize countOfItems=_countOfItems - In the implementation block
-(id)date;
-(BOOL)isLoaded;
-(long long)sectionType;
-(long long)numberOfItems;
-(id)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)albumTitle;
-(id)captionForItemAtIndex:(long long)arg1 ;
-(long long)countOfItems;
@end

