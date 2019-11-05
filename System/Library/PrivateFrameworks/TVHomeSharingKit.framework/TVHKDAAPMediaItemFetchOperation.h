/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaEntityMediaServerFetchOperation.h>

@class TVHKDMAPPlaylistIdentifier;

@interface TVHKDAAPMediaItemFetchOperation : TVHKMediaEntityMediaServerFetchOperation {

	BOOL _doGeniusMixItemsRequest;
	TVHKDMAPPlaylistIdentifier* _sourcePlaylistIdentifier;

}

@property (nonatomic,retain) TVHKDMAPPlaylistIdentifier * sourcePlaylistIdentifier;              //@synthesize sourcePlaylistIdentifier=_sourcePlaylistIdentifier - In the implementation block
@property (assign,nonatomic) BOOL doGeniusMixItemsRequest;                                       //@synthesize doGeniusMixItemsRequest=_doGeniusMixItemsRequest - In the implementation block
+(id)_mediaEntityTypePredicateForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 ;
-(id)_mediaEntityKind;
-(id)_mediaServerRequest;
-(id)_mediaEntitiesFromDMAPEntities:(id)arg1 mediaEntityServer:(id)arg2 ;
-(TVHKDMAPPlaylistIdentifier *)sourcePlaylistIdentifier;
-(void)setSourcePlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
-(void)setDoGeniusMixItemsRequest:(BOOL)arg1 ;
-(BOOL)doGeniusMixItemsRequest;
@end

