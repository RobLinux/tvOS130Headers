/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSLock;

@interface PLThumbnailCascadingDownscaleContext : NSObject {

	NSLock* _lock;
	FigCascadeContextRef _portraitContext;
	FigCascadeContextRef _landscapeContext;

}
-(id)init;
-(void)dealloc;
-(void)discardContexts;
-(BOOL)downscaleImageSurface:(IOSurfaceRef)arg1 destinationCount:(int)arg2 sizes:(SCD_Struct_PL27*)arg3 cropModes:(int*)arg4 pixelFormat:(unsigned)arg5 bytesPerRowAlignment:(int)arg6 destinationData:(id)arg7 ;
@end

