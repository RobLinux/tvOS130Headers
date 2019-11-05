/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaServerRequestOperation.h>

@class NSSet;

@interface TVHKMediaCategoryTypesOperation : TVHKMediaServerRequestOperation {

	NSSet* _mediaCategoryTypes;
	unsigned long long _photoLibraryState;

}

@property (assign,nonatomic) unsigned long long photoLibraryState;              //@synthesize photoLibraryState=_photoLibraryState - In the implementation block
@property (nonatomic,copy) NSSet * mediaCategoryTypes;                          //@synthesize mediaCategoryTypes=_mediaCategoryTypes - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 ;
-(id)_mediaCategoryTypesFromparsedResponse:(id)arg1 ;
-(void)setMediaCategoryTypes:(NSSet *)arg1 ;
-(unsigned long long)photoLibraryState;
-(id)initWithMediaServerIdentifier:(id)arg1 databaseID:(unsigned long long)arg2 photoLibraryState:(unsigned long long)arg3 ;
-(NSSet *)mediaCategoryTypes;
-(void)setPhotoLibraryState:(unsigned long long)arg1 ;
@end

