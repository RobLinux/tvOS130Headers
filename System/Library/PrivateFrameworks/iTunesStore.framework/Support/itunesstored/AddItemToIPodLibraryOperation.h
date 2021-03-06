/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, IPodLibraryItem;

@interface AddItemToIPodLibraryOperation : ISOperation {

	NSNumber* _insertedItemPersistentIdentifier;
	IPodLibraryItem* _libraryItem;

}

@property (readonly) IPodLibraryItem * IPodLibraryItem; 
@property (readonly) NSNumber * insertedItemPersistentIdentifier; 
-(void)dealloc;
-(void)run;
-(id)_libraryItem;
-(void)_setInsertedItemPersistentIdentifier:(long long)arg1 ;
-(id)initWithIPodLibraryItem:(id)arg1 ;
-(IPodLibraryItem *)IPodLibraryItem;
-(NSNumber *)insertedItemPersistentIdentifier;
@end

