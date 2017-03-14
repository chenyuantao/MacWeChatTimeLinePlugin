//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewerWindow.h"

#import "AccountServiceExt.h"

@class MMImageView, NSString, WCContactData;

@interface MMProfilePhotoViewerWindow : MMViewerWindow <AccountServiceExt>
{
    WCContactData *_contact;
    MMImageView *_imageView;
}

+ (id)viewerWindowForContact:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) MMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)onUserLogout;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (id)supportedActions;
- (BOOL)useSpaceKeyForClose;
- (struct CGSize)sizeForContent;
- (void)loadContent;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
