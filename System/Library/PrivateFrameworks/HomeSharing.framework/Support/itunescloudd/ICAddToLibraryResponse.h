/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICDResponse.h>

@class NSDictionary;

@interface ICAddToLibraryResponse : ICDResponse {

	BOOL _updateRequired;
	NSDictionary* _addedItems;

}

@property (nonatomic,retain) NSDictionary * addedItems;              //@synthesize addedItems=_addedItems - In the implementation block
@property (assign,nonatomic) BOOL updateRequired;                    //@synthesize updateRequired=_updateRequired - In the implementation block
-(NSDictionary *)addedItems;
-(void)setAddedItems:(NSDictionary *)arg1 ;
-(BOOL)updateRequired;
-(void)setUpdateRequired:(BOOL)arg1 ;
@end

