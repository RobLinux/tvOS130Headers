/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHResourceChooserAsset;
@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;

@interface PHResourceChooserList : NSObject {

	id<PHResourceChooserAsset> _asset;
	/*^block*/id _itemHandler;
	/*^block*/id _endOfListHandler;
	long long _hintDataCurrentOffset;
	long long _hintDataNextItemOffset;
	BOOL _finishedPresentingFromHints;
	NSSortDescriptor* _sortDescriptor;
	NSManagedObjectContext* _context;
	NSArray* _nonHintResources;
	NSArray* _unvisitedNonHintResources;
	unsigned long long _lastPresentedFullResourceIndex;
	BOOL _finishedPresentingFromFetchedResources;
	NSMutableArray* _visitedKeys;
	unsigned long long _enumerationDirection;

}
-(id)init;
@end

