/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSXPCStoreServerRequestHandlingPolicy.h>

@interface PLXPCPhotoLibraryStoreServerRequestHandlingPolicy : NSXPCStoreServerRequestHandlingPolicy
-(BOOL)shouldAcceptConnectionsFromClientWithContext:(id)arg1 ;
-(BOOL)shouldAcceptMetadataChangesFromClientWithContext:(id)arg1 ;
-(id)restrictingWritePredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingReadPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)restrictingPullChangeHistoryPredicateForEntity:(id)arg1 fromClientWithContext:(id)arg2 ;
-(id)_entityNamesAllowedByRestrictedDataEntitlements:(id)arg1 ;
-(id)_restrictedEntityNamesAllowedForContext:(id)arg1 ;
@end

