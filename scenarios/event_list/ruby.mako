<%namespace file='/_main.mako' name='main'/>
% if request is UNDEFINED:
    Balanced::Event.all
% else:
    ${main.ruby_boilerplate()}
    marketplace = Balanced::Marketplace.my_marketplace

    events = Balanced::Event.all(:limit => 2)
% endif
