/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PFStoreComparisonCache : NSObject {

	NSMutableDictionary* _identifierToStoreUUIDToObjectID;
	NSMutableDictionary* _storeUUIDToIdentifiers;

}
-(id)init;
-(void)dealloc;
-(id)objectIDForIdentifier:(id)arg1 inStore:(id)arg2 ;
-(void)setObjectID:(id)arg1 forIdentifier:(id)arg2 ;
-(id)identifiersForStore:(id)arg1 ;
@end
