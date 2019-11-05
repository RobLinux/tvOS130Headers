/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/NSSecureCoding.h>
#import <MusicLibrary/ML3MusicLibraryResourcesProviding.h>

@class ML3MusicLibraryResourcesManagerContext, _ML3BaseMusicLibraryResourcesManager, NSString;

@interface ML3MusicLibraryResourcesManager : NSObject <NSSecureCoding, ML3MusicLibraryResourcesProviding> {

	ML3MusicLibraryResourcesManagerContext* _context;
	_ML3BaseMusicLibraryResourcesManager* _implementation;

}

@property (nonatomic,retain) _ML3BaseMusicLibraryResourcesManager * implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (nonatomic,retain) ML3MusicLibraryResourcesManagerContext * context;                   //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sharedManager;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ML3MusicLibraryResourcesManagerContext *)context;
-(void)setContext:(ML3MusicLibraryResourcesManagerContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(_ML3BaseMusicLibraryResourcesManager *)implementation;
-(id)libraryContainerPathByAppendingPathComponent:(id)arg1 ;
-(id)pathForResourceFileOrFolder:(int)arg1 ;
-(id)pathForResourceFileOrFolder:(int)arg1 basePath:(id)arg2 relativeToBase:(BOOL)arg3 createParentFolderIfNecessary:(BOOL)arg4 ;
-(id)libraryContainerPath;
-(id)libraryContainerRelativePath:(id)arg1 ;
-(id)pathForBaseLocationPath:(long long)arg1 ;
-(id)initWithBaseResourcesManager:(id)arg1 ;
-(void)setImplementation:(_ML3BaseMusicLibraryResourcesManager *)arg1 ;
@end

