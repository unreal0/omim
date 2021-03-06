@interface MWMBottomMenuCollectionViewCell : UICollectionViewCell

@property(weak, nonatomic) IBOutlet UIImageView * icon;
@property(nonatomic, readonly) BOOL isEnabled;

- (void)configureWithImageName:(NSString *)imageName
                         label:(NSString *)label
                    badgeCount:(NSUInteger)badgeCount
                     isEnabled:(BOOL)isEnabled;

@end

@interface MWMBottomMenuCollectionViewPortraitCell : MWMBottomMenuCollectionViewCell
@end

@interface MWMBottomMenuCollectionViewLandscapeCell : MWMBottomMenuCollectionViewCell
@end
