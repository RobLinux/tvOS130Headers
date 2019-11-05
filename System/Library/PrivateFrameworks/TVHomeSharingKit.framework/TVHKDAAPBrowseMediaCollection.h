/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaCollection.h>

@class TVHKMediaEntityType, TVHKDAAPBrowseMediaCollectionIdentifier;

@interface TVHKDAAPBrowseMediaCollection : TVHKMediaCollection {

	TVHKMediaEntityType* _type;
	TVHKDAAPBrowseMediaCollectionIdentifier* _browseMediaCollectionIdentifier;

}

@property (nonatomic,copy) TVHKDAAPBrowseMediaCollectionIdentifier * browseMediaCollectionIdentifier;              //@synthesize browseMediaCollectionIdentifier=_browseMediaCollectionIdentifier - In the implementation block
-(id)type;
-(id)identifier;
-(unsigned long long)protocol;
-(unsigned long long)persistentID;
-(unsigned long long)nonPersistentID;
-(id)initWithMediaEntityServer:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(id)initWithMediaCategoryType:(unsigned long long)arg1 mediaCollectionType:(unsigned long long)arg2 mediaEntityServer:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5 ;
-(unsigned long long)imageNonPersistentID;
-(TVHKDAAPBrowseMediaCollectionIdentifier *)browseMediaCollectionIdentifier;
-(void)setBrowseMediaCollectionIdentifier:(TVHKDAAPBrowseMediaCollectionIdentifier *)arg1 ;
@end

