/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSPredicate;

@interface PLPairing : NSObject {

	NSPredicate* _locatedInUsersPhotoLibrary;
	os_unfair_lock_s _lock;

}
-(id)init;
-(BOOL)processPairingForGroupIDs:(id)arg1 inContext:(id)arg2 duplicateDetection:(BOOL)arg3 error:(id*)arg4 ;
@end

