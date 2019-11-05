/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerHasStatusChanges:(id)arg1;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4;
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableNameForLibraryManager:(id)arg1;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;

@end

