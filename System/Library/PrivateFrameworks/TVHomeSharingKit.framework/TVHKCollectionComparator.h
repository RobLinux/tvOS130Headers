/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TVHKCollectionComparator : NSObject
-(id)changesFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(/*^block*/id)arg3 updateChangesBlock:(/*^block*/id)arg4 ;
-(id)changesWithSourceObjects:(id)arg1 sourceIdentifiers:(id)arg2 destinationObjects:(id)arg3 destinationIdentifiers:(id)arg4 isEqualBlock:(/*^block*/id)arg5 ;
-(id)_changesWithSourceObjects:(id)arg1 sourceIdentifiers:(id)arg2 destinationObjects:(id)arg3 destinationIdentifiers:(id)arg4 isEqualBlock:(/*^block*/id)arg5 updateChangesBlock:(/*^block*/id)arg6 ;
-(id)_changesFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(/*^block*/id)arg3 isEqualBlock:(/*^block*/id)arg4 updateChangesBlock:(/*^block*/id)arg5 ;
-(id)_changeForRemovingObjectsWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2 ;
-(id)_changeForInsertingObjectsWithSourceIdentifiers:(id)arg1 destinationIdentifiers:(id)arg2 ;
-(id)changesWithSourceObjects:(id)arg1 sourceIdentifiers:(id)arg2 destinationObjects:(id)arg3 destinationIdentifiers:(id)arg4 updateChangesBlock:(/*^block*/id)arg5 ;
-(id)changesFromObjects:(id)arg1 toObjects:(id)arg2 identifierBlock:(/*^block*/id)arg3 isEqualBlock:(/*^block*/id)arg4 ;
@end

