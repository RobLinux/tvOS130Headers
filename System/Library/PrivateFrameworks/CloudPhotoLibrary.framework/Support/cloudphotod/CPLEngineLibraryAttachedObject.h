/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineLibraryAttachedObject <NSObject>
@required
-(id)displayableNameForEngineLibrary:(id)arg1;
-(void)engineLibrary:(id)arg1 sizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg2 sizeOfOriginalResourcesToUpload:(unsigned long long)arg3 numberOfImages:(unsigned long long)arg4 numberOfVideos:(unsigned long long)arg5 numberOfOtherItems:(unsigned long long)arg6;
-(void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didFinishWithError:(id)arg3;
-(void)engineLibrary:(id)arg1 uploadTask:(id)arg2 didProgress:(float)arg3;
-(void)engineLibrary:(id)arg1 didStartUploadTask:(id)arg2;
-(void)engineLibrary:(id)arg1 didFailBackgroundDownloadOfResource:(id)arg2;
-(void)engineLibrary:(id)arg1 didDownloadResourceInBackground:(id)arg2;
-(void)engineLibraryHasStatusChanges:(id)arg1;
-(void)engineLibraryHasChangesInPullQueue:(id)arg1;
-(BOOL)isLibraryManagerForEngineLibrary:(id)arg1;
-(void)engineLibrary:(id)arg1 didCloseWithError:(id)arg2;

@end

